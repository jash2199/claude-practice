# BW Risk Assessment — Risk Management Report

**Date: 2026-11-13 (Friday), ~10:31 ET** (15:31 UTC, live-verified via Robinhood `get_portfolio`, `get_equity_positions`, `get_equity_quotes` on account 424593861 — Robinhood access is back after this morning's earlier-run outage; both calls returned clean, no errors this run). Prior BW report: 2026-11-12, ~13:41 ET, **D-**. Persona file re-read fresh this run — no edits by Jash since last cycle; mandate, format, stance unchanged.

---

## Overall Portfolio Risk Grade: **F** (downgraded from D-)

Radical transparency means saying this plainly rather than softening it: **this desk is downgrading the grade this run, not because the dollar loss is large in absolute terms (it isn't — the pool is still only down ~$1.37 on a $50 base), but because the team's own pre-committed escalation trigger on OMCL has fired and gone unnoticed by every desk on this book, including this one's own prior report.** A risk process that misses its own named trigger is a worse failure than a bad price day, and that is exactly what happened here. Combined with NVDA's "stabilization" thesis now reversing for a second straight session and a rate-input disagreement between desks that nobody has reconciled, this run earns the harshest grade this desk has issued.

**The single biggest risk right now, stated plainly: OMCL's official close on 2026-11-12 printed at $34.95 — already below MS's $35.24 bear-case floor — and today's session (as of this run, ~10:31 ET) is trading at $34.865, bid $34.78/ask $35.00, still below the line.** Every desk on this book (MS, GS, JPM, this desk's own 11/12 report) has been tracking OMCL's bear-floor cushion on a *last-trade, intraday* basis and calling it a "graze" or a "touch" — but the actual settled close for 11/12 was never checked against the line until this run. **It was already below it.** Per the team's own standing precedent — restated independently by MS, BW, and BR all on the same day — "a sustained close below $35.24... should be treated with the same urgency the team applied to NVDA's governance disqualifier." That bar has now been met for one full session and is on track for a second. No desk has acted on it because no desk looked.

---

## Live portfolio snapshot (ground truth, this run)

- **Total account value: $98.62835649** (cash $56.10 + equity $42.52835649). Robinhood confirmed clean this run — no tool outage, unlike the ~10:05 ET run earlier today.
- **Trading pool (house capital rule — $50 base + accumulated P&L; remaining $50 is off-limits reserve): $48.62835649 — a -$1.37164351 (-2.743%) accumulated loss.** This is a sharp one-day deterioration from yesterday's 13:41 ET reading of -1.845% — the loss nearly doubled since yesterday afternoon, with no new capital deployed (cash is flat at $56.10; this is entirely mark-to-market).
- **Deployable cash: $6.10 (12.54% of pool)** — vs. BR's revised 14% target, a -1.46pp gap, essentially unchanged.
- **Equity deployed: $42.52835649 (87.46% of pool).**

| Holding | Qty | Live px | Position $ | % of equity | % of pool | Today's move | Unrealized vs. avg cost |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $160.31 | $3.9799 | 9.36% | 8.18% | **-3.54%** (vs. $166.19 close) | **-20.40%** vs. $201.40 |
| VTI | 0.036690 | $369.04 | $13.5401 | 31.84% | 27.84% | -0.96% | -0.37% vs. $370.40 |
| VXUS | 0.154525 | $82.245 | $12.7089 | 29.88% | 26.13% | -0.50% | -2.24% vs. $84.13 |
| OMCL | 0.106405 | $34.865 | $3.7098 | 8.73% | 7.63% | -0.24% (and already below the $35.24 line on yesterday's official close) | **-25.80%** vs. $46.99 |
| XLE | 0.086775 | $64.575 | $5.6035 | 13.18% | 11.52% | +0.38% | +12.07% vs. $57.62 |
| GEHC | 0.036393 | $82.14 | $2.9893 | 7.03% | 6.14% | +0.37% | +19.58% vs. $68.69 |
| Cash | — | — | $6.10 | — | 12.54% | — | — |

**Note on the broad tape today: VTI and VXUS are both down (-0.96%, -0.50%) alongside NVDA (-3.54%) — this is not purely an idiosyncratic NVDA/OMCL story today, there is genuine market-wide risk-off behind it, which widens the stress case below.**

Concentration triggers re-checked fresh: **NVDA+OMCL combined = 18.09% of equity** (trigger ~25%, buffer ~6.9pp) — clean. **NVDA vs. BR's revised 7% pool target = 8.18%, a +1.18pp drift** (tighter than yesterday's +1.37pp — but **this improvement is 100% attributable to NVDA's price falling further, not to any deliberate resizing; it should not be read as the risk easing**). **GEHC vs. BR's 4%-of-pool target = 6.14%, a +2.14pp overweight** (trigger at 7.5%/+3.5pp, buffer ~1.36pp) — unchanged, now flagged across twelve-plus consecutive reports unresolved.

---

## Correlation analysis

Two distinct correlation stories are live simultaneously today. **First, the chronic one: NVDA (-3.54%) and the risk-on sleeve (VTI -0.96%, VXUS -0.50%) continue to move together**, while XLE (+0.38%) and GEHC (+0.37%) again decoupled on the upside — the same AI/mega-growth factor structure this desk has flagged for weeks. VTI's cap-weighted ~35-40% tilt toward the same mega-cap AI names means its 31.84%-of-equity sleeve still carries an estimated ~11-13pp of *indirect* AI-mega-cap exposure on top of NVDA's own 9.36% direct stake — **effective AI/mega-growth factor exposure remains closer to ~20-22% of equity, not 9%.** **Second, new this run: VTI and VXUS falling together (-0.96% and -0.50%) is a broader, market-wide risk-off signal, not an AI-sleeve-specific one** — US and ex-US diversified equity rarely move in the same direction for purely idiosyncratic reasons. This desk cannot source a specific macro catalyst this run (see Sources — the chronic same-day dateline wall persists), but the co-movement itself is the data point: today's drawdown is not fully explained by the two name-specific stories (NVDA governance, OMCL bear-line) this book has been focused on all week.

## Sector concentration (% of equity, direct exposure)

| Sector | Holdings | % of equity |
|---|---|---|
| Technology / Semis (direct) | NVDA | 9.36% |
| Healthcare (direct) | OMCL + GEHC | 15.76% |
| Energy (direct) | XLE | 13.18% |
| Diversified US equity (cap-weighted, ~35-40% tech-tilted) | VTI | 31.84% |
| Diversified international equity | VXUS | 29.88% |

Named-sector concentration still understates the real picture once VTI's internal AI/mega-cap tilt is counted — true technology/AI-correlated exposure runs closer to a fifth of the book than a tenth.

## Geographic exposure and currency risk

- **US-domiciled/listed: ~70.12% of equity** (NVDA + OMCL + XLE + GEHC + VTI, all USD-reporting).
- **International (ex-US, via VXUS): ~29.88% of equity**, unhedged. VXUS's typical ~75-80% developed / ~20-25% emerging-market split implies an estimated **~6-7% of total equity in unhedged EM currency risk** layered on developed-market FX exposure.
- No currency hedge exists in this toolbox (equities-only, no options, no FX instruments). Unchanged structural gap.

## Interest rate sensitivity by position

| Holding | Rate sensitivity | Why |
|---|---|---|
| NVDA | **High, compounded by key-person/execution risk** | Long-duration growth multiple; MS's rebuilt base-case WACC of ~13.0% shows the discount-rate sensitivity widening post-resignation, on top of pre-existing structural rate sensitivity |
| OMCL | **High, and now compounded by a live structural break** | Small-cap, SaaS-like recurring-revenue healthcare-tech — same long-duration multiple-compression dynamic as NVDA, amplified by thin liquidity and a bear-case floor that has now been closed below |
| VTI | **Moderate-High** | Cap-weighted toward the same long-duration mega-cap growth names driving NVDA's own sensitivity |
| VXUS | **Moderate** | Less mega-cap-growth-weighted than VTI, but EM sleeve adds USD-strength/Fed-policy sensitivity on top of local rate cycles |
| GEHC | **Moderate** | Real balance-sheet leverage (GE spin-off legacy) — rate moves hit interest expense directly |
| XLE | **Low (direct)** | Cash-flow-generative value sector; primary driver is oil price, rate linkage is indirect |

**New finding this run, flagged plainly as a house governance gap: the desks on this book do not agree on the risk-free rate input.** This desk's own prior reports have carried the 10yr at ~4.84-4.90% (FRED's DGS10 series, last printed 11/5). MS's fresh NVDA rebuild this morning instead holds the 10yr at **5.10%, dated 10/15** — a full 20-26bp higher, and from an even older print. A ~25bp spread in the discount-rate input between two desks sizing the same position's WACC is not a rounding error at this portfolio's scale; it is a real source of model disagreement that nobody has reconciled. This desk's own fresh WebSearch this run again found nothing reliably dated to November 2026 on the 10yr — the dateline wall every desk has hit all week continues — so this cannot be resolved today, but it should be named rather than quietly carried forward as if the two figures agreed. Rule 6a's 4.75% rate-shock-pause reopening threshold sits **~9-15bp away under BW's own figure, or ~35bp away under MS's** — the gap in the input changes how close the team actually is to that threshold, which matters.

## Recession stress test (illustrative drawdown estimate, not a forecast)

Using the same historical sector drawdown ranges (2008/2020/2022), reweighted to today's live weights:

| Holding | Est. recession drawdown | Weight (equity) | Weighted contribution |
|---|---|---|---|
| NVDA | -52% | 9.36% | -4.87pp |
| VTI | -30% | 31.84% | -9.55pp |
| VXUS | -32% | 29.88% | -9.56pp |
| OMCL | -35% | 8.73% | -3.05pp |
| XLE | -40% | 13.18% | -5.27pp |
| GEHC | -22% | 7.03% | -1.55pp |
| **Portfolio (equity-weighted)** | | | **≈ -33.9%** |

Essentially unchanged in methodology and magnitude from prior reports. Translated to the pool (equity 87.46% of the $48.63 pool): a recession-grade bear market would still be expected to take roughly **-29.7pp off the pool**, on top of the **-2.743% already realized this run** — i.e., a genuine tail scenario could now push this book toward something on the order of **-32.4% versus the original $50 base**, a modestly worse starting point than yesterday's ~-31% read, purely from today's mark-to-market deterioration.

## Liquidity risk rating by holding

| Holding | Liquidity risk | Basis |
|---|---|---|
| VTI | **Very Low** | Massive-AUM ETF, deepest liquidity in the book |
| NVDA | **Very Low** | Mega-cap, hyper-liquid even through this week's news-driven moves — tight spread confirmed this run ($160.25/$160.29) |
| XLE | **Low** | Large, liquid sector ETF |
| VXUS | **Low** | Large-AUM international ETF |
| GEHC | **Moderate** | Mid/large-cap but has repeatedly shown wide pre-market spreads |
| OMCL | **High — escalated from Moderate-High** | Small-cap (~$1.5-2B), the book's thinnest name. This run's quote shows bid $34.78 / ask $35.00 — a ~0.63% quoted spread, nearly double the ~0.34% this desk flagged yesterday, consistent with a name trading under pressure through a line it has now closed below. A forced exit today would clear materially worse than a session ago. |

## Single stock risk and position sizing

- **NVDA (9.36% equity / 8.18% pool):** Sits inside both the single-name and combined concentration triggers, and is now also inside BR's revised 7% target band at only +1.18pp. **This desk repeats its standing caution: do not read today's narrower drift as risk resolving — it is the position falling in value, not the position being resized.** The underlying governance disqualifier is unchanged; MS's fresh base case ($119/sh) still implies the stock is overvalued by roughly 26% even after today's additional -3.54% move. The 11/17 print is now 2 trading sessions away (T-4 calendar days).
- **OMCL (8.73% equity / 7.63% pool): this desk's most urgent single-line item, and the headline of this report.** Confirmed below the $35.24 bear-case floor on an official closing basis (11/12 close: $34.95) and continuing below it intraday today ($34.865, bid $34.78). **This desk recommends the team treat this as an active, fired trigger as of this report — not a watch item for the next cycle — and bring an explicit decision (hold, with a documented reason beyond "the DCA gate blocks new capital," or a defined partial de-risking) to this cycle's cross-vetting, exactly as the team itself has said this scenario would warrant.** The DCA gate (rule 18) correctly blocks new capital; it does nothing to protect the existing -25.80% position now that the floor it was measured against has given way.
- **GEHC (7.03% equity / 6.14% pool):** still the most overweight name relative to its own named policy target (+2.14pp vs. BR's 4%-of-pool line), now in its twelfth-plus consecutive cross-desk flag without the mechanical 7.5%/+3.5pp trigger firing. With NVDA and OMCL both commanding attention, this item remains at real risk of dropping off the agenda — it shouldn't.
- **XLE (13.18% equity / 11.52% pool):** a single-factor (oil price) bet sized larger than NVDA, wrapped in diversified-looking ETF packaging. It is doing its job today (+0.38%, the only green name alongside GEHC) but this is a reminder, not a reassurance — on a day when the broad market and NVDA are both red, XLE's positive contribution is small relative to its size.

## Tail risk scenarios (probability estimates, house-skeptic framing)

| Scenario | Rough probability | Est. impact |
|---|---|---|
| **OMCL's bear-case floor break is already confirmed on a closing basis and holds through today's close too (second consecutive close below $35.24)** | **~70-75% given today's bid is already $0.46 below the line, ~1.3% through on a last-trade basis** | Mechanically confirms the structural break the team itself said would need NVDA-level urgency; est. further -1 to -4% OMCL downside if sentiment follows through, ~0.1-0.3pp of pool |
| NVDA's 11/17 print (now T-4/2 trading sessions) delivered by interim CEO Kress comes in soft or the market reads a transition-distracted quarter negatively | ~30-35% (unchanged; elevated — first call without the founder in 33 years) | -10% to -20% further on NVDA (~-0.8 to -1.6pp of pool) |
| NVDA's renewed slide today (-3.54%, second consecutive down day) continues into the print rather than stabilizing as BR/GS assumed yesterday | **~35-40%, a new entry this run given today's price action directly contradicts yesterday's "stabilizing" read** | Further -5% to -10% NVDA downside before 11/17, independent of the print itself |
| Broad market risk-off (VTI/VXUS both down together today) extends into next week | ~25-30%, genuinely unresolved — no dated macro catalyst found this run | -3% to -6% portfolio-wide, concentrated in the two diversified sleeves |
| 10yr crosses the rate-shock threshold (4.75% per BW's own figure, or further per MS's higher 5.10% figure) | Genuinely unresolved given the two desks' input disagreement above | -5% to -8% portfolio-wide, concentrated in VTI/NVDA/OMCL's long-duration sleeve |
| Full recession onset (12-month horizon) | ~20-25% (placeholder, not a forecast) | ≈-30% of pool, per stress test above |

## Hedging strategies for the top 3 risks (equities-only toolbox, no options)

1. **OMCL's now-confirmed bear-line break (new top-urgency item).** No options are available to hedge this directly. The only equities-only lever is exposure reduction, which conflicts with MS's underlying bear-case-hold thesis. This desk's recommendation: do not pre-empt with a reactive trim mid-session (consistent with rule 1's no-reactive-trade discipline), but explicitly escalate the *decision* — not just the flag — to this cycle's cross-vetting, since the team's own pre-committed bar for doing so has now been met on the facts, not on this desk's judgment call.
2. **NVDA's continued deterioration against a "stabilizing" thesis that today's price action is actively disproving.** This desk's recommendation: hold deployable cash flat into the 11/17 print (consistent with BR's own cash-reserve earmarking), and treat today's renewed slide as a reason to revisit the "stabilizing" framing in the next cross-desk cycle rather than carry it forward unexamined.
3. **Broad-market/duration risk now showing up directly (VTI and VXUS down together) rather than only through NVDA/OMCL's idiosyncratic stories.** XLE remains the book's only real natural hedge against this — it did its job again today, if modestly. Recommend continuing to not trim XLE to fund anything else. Separately, recommend the team reconcile the 10yr input disagreement between desks (4.84-4.90% vs. 5.10%) before it compounds into a sizing decision built on inconsistent assumptions.

## Rebalancing suggestions

- **OMCL: this desk's top recommendation this run — convert the flag into a decision this cycle.** The bear-case floor is broken on a closing basis; the team itself said that fact pattern warrants NVDA-escalation-level treatment. This desk is not recommending a specific trim size (that is BR's domain per rule 19), but is recommending the team stop treating this as "not yet fired."
- **NVDA: hold at the revised 7% target — now nearly in-band (+1.18pp) — but do not treat the narrower gap as the risk having eased.** No new adds (rule 20) stands. Monitor live into the 11/17 print.
- **GEHC: hold, do not add** — +2.14pp over BR's 4% target with ~1.36pp of runway to the formal trim trigger. Flagging again (twelfth-plus consecutive report).
- **XLE: hold, do not trim** — preserve as the book's one genuine diversification/rate-hedge holding.
- **Cash: hold the $6.10 buffer** — 12.54% of pool against BR's 14% target; not the week to compress the only dry powder in the book.

---

## Heat map summary

| Risk factor | Level | Trend vs. yesterday (13:41 ET) |
|---|---|---|
| OMCL bear-case-line break ($35.24 line, confirmed below on 11/12's official close, still below intraday today) | 🔴 High, **confirmed fired, not just approaching** | **Worsened to confirmed** — the exact trigger the team said needed NVDA-level urgency has now been met and went unnoticed |
| NVDA leadership-transition risk + renewed price slide (-3.54% today, second consecutive down day) | 🔴 High | **Worsened** — yesterday's "stabilizing" narrative is being directly contradicted by today's tape |
| Broad market risk-off (VTI -0.96%, VXUS -0.50% together) | 🟠 Elevated, new this report | **New** — not purely idiosyncratic risk today |
| Rate input disagreement between desks (4.84-4.90% vs. 5.10% on the 10yr) | 🟠 Elevated, new this report | **New** — a model-governance gap named explicitly for the first time |
| NVDA earnings-event risk (11/17, now T-4/2 trading sessions) | 🔴 High | Unchanged in substance, closer in time |
| AI/mega-growth factor concentration (look-through, ~20-22% of equity) | 🟠 Elevated | Unchanged |
| GEHC policy drift vs. BR's 4% target (+2.14pp, ~1.36pp from trigger) | 🟡 Moderate | Essentially unchanged |
| Liquidity (OMCL spread widened to ~0.63%, GEHC thin pre-market depth) | 🟡 Moderate, OMCL escalating | **OMCL worsened**, GEHC unchanged |
| Dry powder (12.54% of pool deployable vs. 14% target) | 🟠 Elevated | Essentially unchanged |
| Currency/geographic exposure (unhedged VXUS, ~30% of equity) | 🟢 Low-Moderate | Unchanged |
| Diversification (XLE as sole internal hedge) | 🟢 Low (favorable) | Unchanged, working again today |

---

*Prepared by BW Risk Assessment, Bridgewater-style radical-transparency desk. Figures verified live via Robinhood `get_portfolio`/`get_equity_positions`/`get_equity_quotes` on account 424593861 at run time (~10:31 ET / 15:31 UTC) — both calls returned clean this run. Cross-referenced against BR's 11/12 ~15:14 ET policy report (NVDA target 10%→7%, cash target 11%→14%, GEHC trigger reaffirmed) and MS's 11/13 ~09:56 ET full NVDA rebuild (base case $119/sh, OMCL base $46.75/bear $35.24). Dedicated WebSearches this run on NVDA/Kress, OMCL, and the 10-year Treasury all hit the same chronic same-day dateline wall every desk on this book has hit all week — nothing reliably dated to 11/13 found for any of the three; no incremental news beyond what is already on file. The OMCL closing-price finding above is sourced directly from Robinhood's `get_equity_quotes` official-close field for 2026-11-12 ($34.95), not from a WebSearch.*
