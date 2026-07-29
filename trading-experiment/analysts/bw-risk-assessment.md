# BW Risk Assessment — Complete Risk Report
**Date: 2026-07-29 (Wednesday, ~14:41 ET)**

*Persona: Bridgewater-style risk analyst for the "Claude Robinhood Trader" — Ray Dalio radical-transparency mandate. Portfolio figures below are live, Robinhood-verified this run (`get_portfolio` + `get_equity_positions` + `get_equity_quotes`, account 424593861), not WebSearch-sourced. Trading pool convention per state.md: $50 base reserve is untouchable; the "pool" = total account value − $50.*

---

## TOP OF REPORT

### Overall portfolio risk grade: **D-**
(down from D as of the 7/24 weekly scorecard — two live binary catalysts have converged on the same 24-hour window with no stop-loss protection on either)

### Single biggest risk right now
**OMCL reports Q2 earnings tomorrow morning (7/30, before the open, call at 8:30am ET) — a live, dated, un-hedgeable binary event hitting a position that is already down 6.5% intraday / ~9.6% from average cost, with no stop-loss and no options available to this book.** JPM's own coverage has flagged, repeatedly, that "beat but sell off anyway" is now the more common recent pattern in this coverage universe, and OMCL's own trailing history includes an -18.4% single-session move on a prior miss. Consensus is a beat (EPS $0.48 est., beats in 3 of the last 4 quarters), but the realistic one-day range per JPM's own framing is roughly **-20% to +15%** — not a narrow band. This fires in well under 24 hours and this book cannot reduce, cap, or insure that exposure before it does, short of an outright pre-earnings trim that would break the book's own "don't react to price alone" discipline.

A close second, structural rather than dated: **~33% of equity value is look-through exposure to the exact AI-capex/semiconductor trade that is actively cratering today** (Intel -6%, AMD -8%, Micron -8%, SK Hynix -9% this session) — see Sector Concentration below. This is not new information, but it is actively resolving unfavorably as this report is written.

---

## Heat Map Summary

| Position | Concentration Risk | Rate Sensitivity | Liquidity Risk | Binary/Event Risk | Geopolitical Risk | **Overall** |
|---|---|---|---|---|---|---|
| NVDA | 🟠 Moderate (double-counted via VTI) | 🔴 High | 🟢 Low | 🟢 Low | 🟡 Moderate | 🟠 **High** |
| VTI | 🔴 High (tech tilt ~42%) | 🟠 Moderate-High | 🟢 Low | 🟢 Low | 🟢 Low | 🟡 **Moderate** |
| VXUS | 🟡 Moderate | 🟡 Moderate | 🟢 Low | 🟢 Low | 🟡 Moderate (semi supply chain) | 🟡 **Moderate** |
| OMCL | 🟡 Moderate | 🟠 Moderate-High | 🟠 Moderate (thin book) | 🔴 **Severe (earnings 7/30 AM)** | 🟢 Low | 🔴 **Severe** |
| XLE | 🟡 Moderate | 🟢 Low | 🟢 Low | 🟢 Low | 🔴 **High (both directions)** | 🟠 **High** |
| Cash (deployable ~$9) | — | — | 🟢 Low | — | — | 🟢 **Low** |

---

## Live position snapshot (Robinhood-verified, ~14:41 ET)

| Symbol | Qty | Avg cost | Live price | Unrealized | Value | % of equity | % of pool |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $201.40 | $195.06 | -3.15% | $4.84 | 12.0% | 9.8% |
| VTI | 0.048530 | $370.90 | $365.49 | -1.46% | $17.74 | 44.0% | 36.0% |
| VXUS | 0.095185 | $84.05 | $83.45 | -0.71% | $7.94 | 19.7% | 16.1% |
| OMCL | 0.106405 | $46.99 | $43.93 | -6.51% | $4.68 | 11.6% | 9.5% |
| XLE | 0.086775 | $57.62 | $58.725 | +1.92% | $5.10 | 12.6% | 10.3% |
| **Total equity** | | | | | **$40.30** | 100% | 81.7% |
| Cash | | | | | $59.00 | — | — |
| **Total account** | | | | | **$99.28** | | |

Trading pool ($50 reserve excluded): ~$49.28. Deployable cash: ~$9.00 (18.3% of pool). Every position except XLE is currently underwater versus its average cost.

---

## Correlation analysis between holdings

This is not a five-way-diversified book — it is closer to **two correlated risk factors (AI-capex/semiconductor, and broad-market beta) plus two partial diversifiers (XLE, OMCL)**:

- **NVDA ↔ VTI: high positive correlation, and doubly exposed.** NVDA is itself one of VTI's largest single constituents, so a NVDA-specific move shows up twice in this book — once directly, once inside VTI. This is not diversification, it's leverage on the same name via two vehicles.
- **NVDA ↔ VXUS: moderate-to-rising correlation right now.** VXUS carries the global semiconductor supply chain (TSMC, Samsung, SK Hynix) — exactly the names cratering today alongside the AI-capex-doubt narrative. On a "sentiment turns against AI capex" day, NVDA and VXUS's semi sleeve move together, not independently.
- **VTI ↔ VXUS: moderate-high.** Global developed-market equities remain highly correlated in risk-off regimes; VXUS adds real diversification on currency and non-US macro/rate-policy factors, but far less on the "AI capex sentiment" factor than its geography label suggests.
- **OMCL ↔ everything else: normally low, historically the book's best true diversifier** against the chip/AI and Hormuz/oil factors — but rule 9 in state.md already documented the exception: on 7/23, when Fed repricing + oil shock + AI-valuation air pocket converged in the same session, OMCL traded down with the whole book. Diversification here is real but **regime-dependent, not absolute** — worth repeating since the book keeps treating it as more durable than it's actually shown itself to be.
- **XLE ↔ NVDA/VTI/VXUS: low, and currently negative** — the one holding actually moving opposite the rest of the book today (+1.92% unrealized vs. four red positions), driven by a distinct catalyst (Iran/Hormuz war, day 152, today's IRGC missile attack on US forces in Jordan and tanker strikes near Hormuz per today's news). This is XLE doing its job as designed. But note the flip side under Tail Risk Scenarios below: this is a concentrated, catalyst-specific bet, not a structural hedge — a sudden de-escalation (as briefly happened 7/25-27) would hit XLE hard with nothing offsetting it.

**Bottom line: the book's real number of independent risk factors is closer to three (AI-capex/tech, broad-market/rate, Iran-Hormuz/oil) than to five holdings.** NVDA + VTI's tech slice + VXUS's semi sleeve are one bet, not three.

---

## Sector concentration risk (look-through, not headline ticker weight)

| Sector (look-through) | Est. % of equity | Driver |
|---|---|---|
| Technology / Semiconductors | **~33%** | NVDA (100%) + VTI's ~42% tech slice (44.0% weight) + VXUS's semi-supply-chain sleeve |
| Healthcare | ~18% | OMCL (100%) + VTI/VXUS healthcare slices |
| Energy | ~14% | XLE (100%) + VTI/VXUS energy slices |
| All other sectors (financials, industrials, consumer, etc.) | ~34% | Residual diversified slice of VTI/VXUS |

**A third of this book's equity value is exposed to the single sector actively selling off hardest today** (SK Hynix -9%, AMD -8%, Micron -8%, Intel -6%, per this run's WebSearch). VTI's headline "broad market ETF" label is doing real work to obscure this — 44% of equity sits in a fund whose largest sector weight is the same trade the book is already making directly through NVDA.

---

## Geographic exposure and currency risk

- **US-domiciled: ~80.3%** of equity (NVDA, VTI, OMCL, XLE — all US-listed, though several have global revenue/supply-chain exposure, notably NVDA and VTI's own tech constituents).
- **Ex-US: ~19.7%** (VXUS only) — this is the book's entire direct currency exposure: EUR, JPY, GBP, and emerging-market currency translation risk embedded in VXUS's underlying holdings. At $7.94, this is real but small in absolute dollar terms.
- No direct FX hedges exist or are needed at this scale; flagging for completeness per mandate, not as an action item.

---

## Interest rate sensitivity by position

| Position | Sensitivity | Why |
|---|---|---|
| NVDA | **High** | High-multiple growth name; discount-rate moves compress valuation disproportionately |
| VTI | Moderate-High | Mega-cap tech weighting drags the whole index's effective duration up |
| VXUS | Moderate | Sensitive to both US rate path (risk-on/off flows) and local-market policy + FX rate differentials |
| OMCL | Moderate-High | Small-cap + growth multiple — small caps are historically *more*, not less, rate-sensitive than large caps |
| XLE | Low | Cash-flow-heavy value sector, low direct duration; dominated by the oil-price/geopolitical catalyst, not discount rates |

**Fresh and relevant today:** the Fed held at 3.50-3.75% (5th straight hold, 9-3 vote) but drew **three hawkish dissents (Hammack, Kashkari, Logan) — the most dissents pushing for a hike since September 2016** — under new Chair Kevin Warsh. That is a meaningfully more hawkish committee tilt than the prior "on hold, no drama" framing this book has been operating under, and it lands squarely on the two highest-rate-sensitivity names (NVDA, and by extension VTI's tech slice) plus the small-cap OMCL position, one day ahead of its own binary event.

---

## Recession stress test — estimated drawdown

**Scenario A — standard demand-driven recession/tech bear market** (2022-style multiple compression):

| Position | Weight | Est. drawdown | Contribution |
|---|---|---|---|
| NVDA | 12.0% | -60% | -7.2pp |
| VTI | 44.0% | -40% | -17.6pp |
| VXUS | 19.7% | -40% | -7.9pp |
| OMCL | 11.6% | -45% | -5.2pp |
| XLE | 12.6% | -45% | -5.7pp |
| **Equity-value drawdown** | | | **≈ -43.6%** |

That's roughly **$17.6 of the current $40.3 equity value**, which would pull total account value from ~$99.3 to **~$81.7** — an ~18% *total-account* drawdown even though only ~40% of the account is invested. The $50 reserve is the only thing capping the damage; it is not currently deployed, but the mandate is to assess the account as constituted, and none of that reserve is protecting the deployed capital itself.

**Scenario B — stagflation / supply-shock recession** (Hormuz war escalates further, oil spikes, growth weakens, Fed forced to hold/hike anyway):

| Position | Weight | Est. move | Contribution |
|---|---|---|---|
| NVDA | 12.0% | -55% | -6.6pp |
| VTI | 44.0% | -35% | -15.4pp |
| VXUS | 19.7% | -35% | -6.9pp |
| OMCL | 11.6% | -40% | -4.6pp |
| XLE | 12.6% | **+15%** | +1.9pp |
| **Equity-value drawdown** | | | **≈ -31.6%** |

XLE's diversification value shows up clearly here — it's the one line that would help, not hurt, in exactly the scenario this book is most exposed to via the live Iran/Hormuz situation. Still a materially negative outcome overall; XLE at 12.6% of equity is nowhere near large enough to offset the rest.

---

## Liquidity risk by holding

| Holding | Rating | Note |
|---|---|---|
| VTI | 🟢 Low | One of the most liquid ETFs globally, tight spreads |
| VXUS | 🟢 Low | Highly liquid, marginally wider spreads than VTI |
| NVDA | 🟢 Low | Mega-cap, among the most liquid single names in the market |
| XLE | 🟢 Low | Large, liquid sector ETF |
| OMCL | 🟠 **Moderate** | Small/mid-cap; this desk has previously flagged its bid/ask spread as unusually wide for the name. At this account's trivial dollar sizes it isn't a practical entry/exit constraint today, but it's the one line where a stress-event market order could see real slippage relative to the others. |

---

## Single stock risk & position sizing recommendations

- **Combined single-name (non-diversified) exposure: NVDA + OMCL ≈ 23.6% of equity / 19.3% of pool** — meaningful concentration for a five-line, mostly-ETF book.
- NVDA is at ~12.0% of equity / 9.8% of pool — still comfortably under the standing 18-20% organic-drift trigger. No action required there.
- OMCL is at ~11.6% of equity / 9.5% of pool, already down ~9.6% from cost, with earnings tomorrow. **Do not add to OMCL around this print, in either direction, until a post-print full 5-desk re-read** — this is already the standing contingency plan (state.md, written 7/21) and it is correct; reaffirming it, not revising it.
- **Sizing discipline recommendation going forward:** no single non-diversified name should exceed roughly 15% of equity value at this account's size without a specific, high-conviction, fully cross-vetted case (rule 6) — current sizing is inside that band for both NVDA and OMCL, which is the one clean piece of good news in this report.

---

## Tail risk scenarios with probability estimates

1. **OMCL earnings miss and/or guidance cut, 7/30 pre-market — ~35-40% probability of a -10%-or-worse next-day move.** Consensus expects a beat, but this book's own tracked history shows "beat but sell off anyway" is now the more common pattern in its coverage universe, and OMCL's own trailing range on a prior miss was -18.4% in a single session.
2. **Iran/Hormuz war escalates further — full shipping shutdown or a direct state-on-state exchange beyond today's proxy strikes — ~15-20% probability over the next 1-2 weeks.** Today alone brought IRGC ballistic missiles fired at US forces in Jordan (intercepted) and the first claimed Iranian strikes on Hormuz tankers since the brief 7/25 pause — this is trending toward escalation, not away from it, as of this report.
3. **Sudden Iran ceasefire / de-escalation — ~10-15% probability near-term.** Talks have repeatedly stalled or collapsed this cycle (Iran just rejected Oman's joint-management proposal for the Strait), but if one lands, XLE is the position with the least valuation cushion (MS's own DCF reads it as modestly-to-moderately overvalued at spot) and would be hit hardest, with nothing else in the book offsetting it.
4. **AI-capex fundamentals actually crack (not just sentiment) — ~20-25% probability over the next month.** SK Hynix slowing HBM expansion is a real supply-side data point, not pure sentiment. If upcoming hyperscaler earnings confirm capex guidance cuts, NVDA and the tech slices of VTI/VXUS would all reprice together — the correlation risk flagged above crystallizing at once, not gradually.
5. **Fed hikes at the next meeting given today's 3-vote hawkish dissent under a new, more hawkish-leaning Chair — ~25-30% probability.** Would pressure the tech-heavy majority of this book (NVDA, VTI, and OMCL's small-cap growth multiple) broadly, independent of any single-name catalyst.

---

## Hedging strategies for the top 3 risks (equities-only — no options available)

1. **OMCL earnings binary (top risk):** genuine hedging tools are limited without options. The only real levers are (a) a deliberate pre-print trim to cut dollar exposure — a legitimate, planned risk-reduction decision distinct from a reactive panic sell, if the trader wants to take it — or (b) doing nothing and leaning on the pre-committed contingency plan's discipline (no same-minute decisions, thesis-break-only trigger) as the actual risk control. Given the position is only ~$4.68, the behavioral hedge matters more here than any market hedge would.
2. **AI-capex/semiconductor concentration (~33% of equity):** don't fix this by adding more VTI — that re-adds the same tech tilt. Direct the next deployable dollar toward a genuinely uncorrelated sector (staples, utilities, or healthcare-adjacent — flagging as a new-idea request for GS) rather than the default core top-up. This doesn't require selling anything today; it's a "where does the next dollar go" discipline change.
3. **Iran/Hormuz whipsaw concentrated in XLE:** XLE is already the equity-only hedge for this book's broader oil-shock/risk-off exposure, and it's already sized at half-position per BW's own original entry-trigger design — the correct hedge-for-the-hedge is simply **not adding to XLE at today's price ($58.73), which is already back above the original $55-58 entry zone.** Chasing this move to "size up the hedge" would itself become a new source of risk.

---

## Rebalancing suggestions

No sells are recommended today — every non-XLE position is underwater and this book's own rule 1 ("no fresh catalyst, no trade") applies to trimming as much as to adding. These are allocation suggestions for **where future deployable dollars go**, not an action list for today:

- Shift the target for look-through Tech/Semiconductor exposure from the current **~33% down toward ~25-28% of equity** over time, by directing new capital away from VTI/NVDA and toward genuinely uncorrelated sectors.
- Hold Energy (XLE) and Healthcare (OMCL) exposure flat at current levels (~14% and ~18% respectively) — do not add to either until, respectively, a fresh MS DCF re-read (XLE) or a post-earnings 5-desk re-read (OMCL).
- Grow the diversified "everything else" bucket from ~34% toward ~39%+ as new ideas clear cross-vetting (rule 6) — this is the only way to genuinely dilute the tech-factor concentration rather than just relabeling it under a different ticker.
- **Do not deploy the remaining ~$9 deployable cash today.** With OMCL earnings and an actively escalating Hormuz conflict both live in the next 18 hours, preserve the buffer until both resolve, then reassess at the next scheduled run.

---

## Stance note

Two live binary catalysts — OMCL earnings and an escalating shooting war — are now stacked in the same 24-hour window on top of a book that is already a third-concentrated in the sector selling off hardest today. Every position but one is underwater. The process discipline (no same-minute decisions, pre-committed triggers, no chasing) has held up well and should keep holding — but "the process is sound" and "the risk is low" are not the same statement, and this report should not be read as the second when it only supports the first. Grade: **D-**.

---

Sources:
- [Iran War 2026 — Day 152 Update](https://www.globalsecurity.org/military/ops/iran-war-oprep.htm)
- [Iran War Day 152 | Hormuz Closed | Iran SITREP](https://www.iransitrep.com/)
- [Fed rate decision July 2026: Divided Fed holds interest rates steady — CNBC](https://www.cnbc.com/2026/07/29/fed-rate-decision-july-2026.html)
- [Live updates: Fed holds interest rates steady, three officials dissent — CNN](https://www.cnn.com/2026/07/29/business/live-news/federal-reserve-interest-rate-07-29-26)
- [Omnicell to Report Q2 Earnings: OmniSphere in Focus — Yahoo Finance/Zacks](https://finance.yahoo.com/healthcare/articles/omnicell-report-q2-earnings-omnisphere-153100649.html)
- [Omnicell (OMCL) Reports Q2: Everything You Need To Know Ahead Of Earnings](https://finance.yahoo.com/markets/stocks/articles/omnicell-omcl-reports-q2-everything-174902691.html)
- [Chip stocks shed more than $1 trillion as selloff hits companies powering AI boom — CNBC](https://www.cnbc.com/2026/07/29/chip-selloff-sk-hynix-samsung-softbank.html)
