# BW Risk Assessment — Risk Management Report
**Date: 2026-10-01 (Thursday), ~10:46 ET (verified via `TZ=America/New_York date`).** Live-verified via Robinhood (`get_portfolio`, `get_equity_positions`, `get_equity_quotes`) on account 424593861 at report time. First BW report of the day, landing ~30 minutes after MS's full WACC rebuild posted.

---

## Overall Portfolio Risk Grade: **F** — downgraded from D- (held since 8/20)

## Single biggest risk right now
**MS's full WACC rebuild (10:15 ET, this morning) just erased the valuation floor under two of this book's six holdings — GEHC and XLE, together ~17% of the pool — the same morning a federal government shutdown appears to have actually begun.** This is not another repeat of a flag this desk has already raised: GEHC was entered *specifically because* MS's DCF cleared it as undervalued (the 8/20 entry trigger), and that was this position's entire fundamental rationale. It is now **-2.3% overvalued**. XLE's "undervalued hedge" framing — already the thinnest, most-questioned call on the book for weeks — is now **-4.2% overvalued** too. NVDA's overvaluation, already the widest single-name gap on the book, widened further to **-16.7%**. That leaves OMCL as the only held name with any DCF support at all, and even that narrowed from +56.9% to +43.5%. Four of six holdings are now priced *above* or with narrowing distance to this book's own intrinsic-value estimates, in a book with no stop-loss and no options hedge, on the same day a shutdown furloughs ~750K federal workers and adds a fresh, undated macro overhang on top of an already-unresolved rate shock. Radical transparency: this is the first morning this book's valuation discipline (rule 5 — "a DCF hard pass is a hard pass, a DCF agreement is a green light") has actually gone against the *majority* of held positions simultaneously, not just NVDA alone. That is a structural deterioration, not a mark-to-market wobble, and the grade should say so plainly rather than carry D- forward on inertia.

---

## Portfolio snapshot (live, 2026-10-01 ~10:41 ET)

`get_portfolio`: total_value **$99.91462829** (cash $56.10 + equity $43.81462829). Pool ≈ **$49.9146, a -$0.0854 (-0.171%) accumulated loss** — the pool has round-tripped from 9/30's +0.266% afternoon read into negative territory this morning, consistent with four of six holdings opening red. Deployable cash $6.10 (~12.22% of pool).

| Position | Qty | Last Price | Value | % Equity | % Pool | Unrealized | Day chg (vs 9/30 close) |
|---|---|---|---|---|---|---|---|
| NVDA | 0.024826 | $230.49 | $5.722 | 13.06% | 11.47% | **+14.44%** | +0.92% |
| VTI | 0.036690 | $373.80 | $13.715 | 31.31% | 27.48% | +0.92% | -0.12% |
| VXUS | 0.154525 | $84.425 | $13.046 | 29.78% | 26.14% | +0.35% | -0.63% |
| OMCL | 0.106405 | $33.495 | $3.564 | 8.14% | 7.14% | **-28.72%** | -1.63% |
| XLE | 0.086775 | $62.23 | $5.400 | 12.33% | 10.82% | +8.00% | +1.19% |
| GEHC | 0.036393 | $64.95 | $2.364 | 5.40% | 4.74% | -5.44% | -0.64% |
| Cash (deployable) | — | — | $6.10 | — | 12.22% | — | — |

NVDA+OMCL combined **~21.20% of equity** — 25% concentration trigger clean, ~3.80pp buffer. NVDA alone **~13.06% equity / 11.47% pool** (18-20% trigger clean, **+1.47pp over BR's 10% pool target** — the widest reading yet, and BR's own 10/1 re-underwrite is due *today*; this report posts ahead of it). **OMCL DCA gate (rule 18): needs $2.50 accumulated pool profit to fire — currently -$0.0854, the pool is net negative, so the gate is further away than at any point since before 9/22.**

Analyst inputs reviewed this run: MS's full WACC rebuild (10:15 ET, today — the dominant new fact), GS's screener (09:4x ET, today), JPM's earnings calendar (09:21 ET, today). BR remains at 9/30 ~16:13 ET (~18.5hrs stale; its own 10/1 re-underwrite is still pending as this report goes to print).

---

## Correlation analysis between holdings

- **The rate-sensitivity correlation this desk has named for weeks just became visible in the valuation numbers themselves, not just in price action.** NVDA, OMCL, XLE, and GEHC are all single-stage CAPM-discounted models that share the same risk-free input; MS's mechanical +59bp Rf pass-through moved all four in the same direction (fair value down) by construction. That is not new. What *is* new: two of the four (GEHC, XLE) had gaps thin enough to flip sign on this one move, converting a textbook "these four move together on a rate shock" correlation from a theoretical risk into an actual, realized one this morning.
- **VTI and VXUS both opened red today** (-0.12%, -0.63%) alongside four of six holdings — a broadly risk-off tape, consistent with shutdown-related uncertainty rather than a name-specific break on either ETF.
- **XLE is the day's only green mover (+1.19%)** even as its own DCF just flipped overvalued — the hedge-decoupling pattern this desk has flagged for over a week (price moving opposite to, or independent of, its own thesis/valuation) continues. A position whose price is rising while its fundamental support just went negative is not a coincidence to wave off; it is exactly the kind of divergence that precedes a sharp catch-down.
- **NVDA (+0.92%) and OMCL (-1.63%) diverged again** — a continuation of the multi-session pattern already logged as noise, not a coherent pair thesis.

## Sector concentration risk with percentage breakdown

- **Tech/AI look-through concentration: ~28.8% of equity** (NVDA's direct 13.06% plus VTI/VXUS's embedded mega-cap tech weight) — essentially flat, still the single largest structural concentration, and now the sector most directly affected by MS's rebuild (NVDA's own DCF gap is the widest on the book).
- **Energy: ~12.33% of equity** (XLE) — now carrying a negative DCF behind a positive price move; see correlation note above.
- **Healthcare: ~13.53% of equity** (OMCL 8.14% + GEHC 5.40%) — one name (OMCL) still has real valuation support, the other (GEHC) does not, as of this morning. These two should no longer be treated as a matched sleeve; they now have opposite valuation stories.
- **Broad-market core: VTI + VXUS = ~61.09% of equity** — unchanged structurally, majority of the book by construction, both carrying standard equity-duration exposure to the same rate shock via the discount rate applied to the market as a whole (even without a single-name DCF to show it explicitly).
- **Cash: 12.22% of pool** — nominally earmarked for the OMCL DCA gate and the (lapsing) XLE top-up trigger, but with the pool net negative and XLE's valuation case now gone, neither gate should be treated as a live deployment candidate this morning regardless of where the dollar thresholds sit.

## Geographic exposure and currency risk factors

- **VXUS (~29.78% of equity)** remains the book's only direct non-US/non-USD-underlying exposure. No fresh geography-specific catalyst found this run; today's red print tracks the broad domestic risk-off tape (shutdown), not an ex-US-specific event.
- **NVDA** carries standing indirect chip-export-policy exposure and the still-unresolved Netlist ITC HBM-patent action (JPM's flag) — unaddressed, now sitting underneath the widest DCF overvaluation gap on the book.
- **XLE's exposure is global-energy-price risk, not currency risk.** Fresh WebSearch this run found Iran's IRGC continuing to assert the Strait stays closed "while US forces operate in the region" — language consistent with, not a fresh escalation beyond, the standoff already on file; no confirmed today-dated incident found. Treat as unresolved, not de-escalated, same as every prior report.
- **The federal shutdown is a US-domestic, USD-denominated risk** — it does not touch VXUS's currency/geography profile directly, and if anything is a mild structural argument (per BR's own framing) for not trimming the one diversifying sleeve on the book.
- **VTI, OMCL, GEHC** remain overwhelmingly US-domestic-revenue, minimal direct currency risk.

## Interest rate sensitivity for each position

Ranked by how much of each position's investment case now depends on a rate reversal to hold up, using this morning's rebuilt DCF gaps:

- **GEHC — now the most exposed position on a rate basis, not the least.** Its entire "undervalued, that's why we hold it" rationale (+7.1%) flipped to -2.3% on a 59bp Rf move alone. MS's own report says a reversal below 5% restores it to ~+7% — meaning this position's fundamental case is now a direct, binary bet on the rate path, which it was never originally sized or sold as.
- **XLE — second-most exposed**, same mechanism (+1.4%→-4.2%), compounding an already-documented hedge-decoupling problem. This was already this desk's "thinnest cushion, declining to call it a working hedge" name before today; it now has no cushion at all.
- **NVDA — high sensitivity, already overvalued and now materially more so** (-10.6%→-16.7%). Price continues to run opposite to the DCF trend (+0.92% today even as the fair-value gap widens) — the most extreme price/fundamentals divergence on the book.
- **OMCL — still the highest absolute rate sensitivity in dollar terms (largest DCF swing: +56.9%→+43.5%), but the only one of the four with enough margin that it isn't at risk of flipping sign** on a further comparable move. This is the one rate-sensitive name this desk is not newly worried about today.
- **VTI, VXUS — moderate, diversified sensitivity**, no single-name DCF but not immune — both carry standard equity-duration exposure, both opened red today alongside the broader book.
- **Cash — zero sensitivity**, and its relative value just rose again: it is now the only unambiguously rate-proof asset in a book where 4 of 6 holdings are rate-model-sensitive and 3 of those 4 are overvalued on today's numbers.

## Recession stress test showing estimated drawdown

Scenario: a genuine demand-destruction recession (distinct from today's supply-shock/rate-shock/shutdown regime) — broad equities down ~20-25%, energy participates in the decline rather than acting as a hedge.
- Equity sleeve (currently ~87.78% of pool) at a uniform -20%: **≈-17.56% of pool value**.
- Realistic dispersion: NVDA/OMCL (highest-beta, highest-duration) plausibly -25% to -30%; VTI/VXUS closer to -20%; XLE potentially falling *more* than the broad market in true demand destruction (and already carries a negative DCF floor, unlike prior reads); GEHC — previously framed as "defensive, most resilient" — no longer has a valuation floor to lean on either, so that resilience assumption is now weaker than it was last week.
- **Blended estimated pool drawdown: -18% to -25%**, roughly **-$8.99 to -$12.48** of the ~$49.91 pool — the top of this range widened slightly from 9/30's -18% to -24% because GEHC can no longer be assumed to hold up better than the market on fundamentals alone.
- **A second, more immediate scenario is arguably more relevant right now than a classic recession:** a prolonged shutdown (prior federal shutdowns in this book's own history ran 43 and 76 days) combined with an already-confirmed rate shock and now a valuation-support vacuum under two holdings. That combination doesn't need a "genuine recession" to produce a meaningful pool drawdown — it could happen on sentiment and multiple compression alone, which is arguably already underway this morning.

## Liquidity risk rating for each holding

| Holding | Liquidity rating | Notes |
|---|---|---|
| VTI | 🟢 Very high | Mega-cap ETF, deepest liquidity on the book |
| VXUS | 🟢 Very high | Mega-cap international ETF |
| NVDA | 🟢 Very high | One of the most liquid single names on any US exchange |
| XLE | 🟢 High | Large sector ETF, ample daily volume |
| GEHC | 🟢 High | Large-cap, ample daily volume for this position's fractional size |
| OMCL | 🟡 Moderate | Small/mid-cap — thinner daily volume than the other five, still sufficient depth at this book's fractional-share sizing |

No liquidity risk is actionable at this book's scale — unchanged. Liquidity was never the problem here; valuation support just became one.

## Single stock risk and position sizing recommendations

- **NVDA's pool-weight overshoot vs. BR's 10% target is now +1.47pp, the widest reading on file, entirely on price drift with no purchase behind it.** This desk has flagged this across seven-plus consecutive reports. BR's own 10/1 re-underwrite is due *today* — this report posts before it. If BR defers again past its own stated deadline, that is a genuine process failure, not a routine carry-forward, and this desk will say so without hedging in the next report.
- **OMCL's -28.72% unrealized loss remains this book's largest standing single-name risk**, held without a mechanical stop-loss by design, and the DCA gate just moved *further* away (the pool turned net-negative this morning) rather than closer.
- **GEHC and XLE sizing risk is no longer a "watch item" — it is a live, unaddressed gap.** Both positions are now held above their own DCF fair value with zero valuation support, GEHC specifically because its *only* stated entry rationale (the 8/20 valuation trigger) has been invalidated. Neither position breaches a price-based structural-break line (BR's $62/$65 band for GEHC, no equivalent for XLE), so no mechanical trigger forces a review — but a trigger built on price alone cannot catch a valuation-only break like this one. This desk recommends BW/BR jointly treat this as a standing flag requiring an explicit decision (hold-on-sentiment-with-eyes-open vs. trim), not a silent carry-forward, at the next BR report.
- **No position sizing change is being executed by this desk** (research-only mandate) — but unlike prior reports, this one is not comfortable calling today's unchanged sizing a "deliberate ride-it-out choice." Nobody has yet made that choice explicitly in light of this morning's rebuild; it is currently just inertia.

## Tail risk scenarios with probability estimates

1. **The government shutdown extends beyond a few days and broad risk sentiment deteriorates further**, pressuring VTI/VXUS and the whole equity sleeve independent of any single-name catalyst. Estimated probability of a >5% week-over-week broad-market-driven drawdown touching this book: **~25-30%** — this book's own prior shutdown history (43 and 76 days) argues against assuming a quick resolution; new scenario, not previously modeled.
2. **The rate shock continues or deepens, pushing more of the book's DCF models further negative** (the 30yr has already touched 5.5%, a 2004-era level). Estimated probability the 10yr holds above 5% for another full week without reversing: **~55-60%**, essentially unchanged from this desk's standing range, but the consequence just became concrete (two flipped verdicts) rather than hypothetical.
3. **GEHC gives back its price gains and converges toward its new, lower DCF fair value ($63.9) rather than reverting to the old one ($70.8).** This is a materially different and more acute version of a risk this desk has carried for weeks as "sentiment vs. fundamentals gap" — it is now "sentiment holding up a price above a negative fair-value gap." Estimated probability of a >5% move down within two weeks: **~30-35%, up from ~30% carried forward** — no fundamental floor left to arrest a slide.
4. **Hormuz re-escalates further, or a confirmed strike materially disrupts tanker traffic**, hitting XLE at the exact moment its own valuation support is also gone. Estimated probability over the next 30 days: **~20-22%, carried forward** — no confirmable fresh escalation or de-escalation dated today, situation remains open.
5. **OMCL-specific structural thesis break** ahead of its ~10/30-11/4 print (date still disputed across desks per JPM). Estimated probability: **~10%, unchanged** — still the one name with real valuation support, still the least of this desk's five worries today.
6. **A correlation-to-1 liquidity event** combining the shutdown, the rate shock, and the post-MU-print tape digestion all landing in the same week, with four of six holdings now rate-model-sensitive and three of those four overvalued. Estimated probability of a >10% week-over-week equity drawdown from this cause: **~25%, up from ~22%** — this book has strictly more simultaneous open risk factors converging today than at any point in its history.

## Hedging strategies to reduce the top 3 risks (equities-only toolbox — no options available)

1. **Against the now-realized rate/valuation-flip risk (GEHC, XLE, and NVDA's widening gap):** no clean equities-only hedge exists for a discount-rate repricing that has already landed. The two real levers: (a) rule 6a's standing pause on new high-multiple core-ups stays exactly where it is — if anything this morning's rebuild strengthens the case for extending that caution to *existing* rate-sensitive satellites, not just new buys; (b) this desk repeats, now more urgently, the standing ask to get GEHC and XLE an explicit hold-vs-trim decision rather than letting a valuation-only break sit unaddressed because no price-based trigger caught it.
2. **Against the shutdown/macro-liquidity risk:** cash is the only real hedge in this toolbox, and the 12.22% deployable cash on hand should be preserved, not routed into either gate (OMCL DCA, XLE top-up) while this risk window is open — doing so now would mean deploying new capital into OMCL (fine, still has valuation support) or XLE (no longer does) at the exact moment macro uncertainty is highest. This desk recommends treating both gates as paused, not just mathematically distant, until the shutdown's trajectory is clearer.
3. **Against tech/AI look-through concentration (~28.8% of equity) and NVDA's persistent overshoot:** no new position-level action recommended by this desk, but BR's 10/1 re-underwrite — due today — is the mechanism that exists specifically to resolve this. This desk will treat a further deferral past today as the genuine process failure it would be, not a routine carry-forward, consistent with every warning issued on this point since mid-September.

## Rebalancing suggestions with allocation percentages

Current live weights vs. BR's 9/17-revised targets (all % of pool): NVDA 11.47% (target 10%, **+1.47pp**), VTI 27.48% (target 28%, -0.52pp), VXUS 26.14% (target 25%, +1.14pp), XLE 10.82% (target 12%, -1.18pp), OMCL 7.14% (target 10%, **-2.86pp**), GEHC 4.74% (target 4%, +0.74pp), Cash 12.22% (target 11%, +1.22pp).

- **No position currently breaches BR's 5pp mechanical drift trigger** — nothing here is forced. But two of these gaps now carry a valuation story they didn't have yesterday: XLE's -1.18pp underweight is no longer "waiting for a good entry," it's "underweight a position with no fair-value support," and GEHC's +0.74pp overweight is sitting on the same gone-negative valuation.
- **NVDA's +1.47pp overshoot is the widest on file.** This desk's position stands unchanged in substance but sharper in urgency: BR's 10/1 re-underwrite is due *today*, and this is the deadline this desk will hold BR to.
- **The XLE top-up trigger's lapse, already effectively decided per BR's 9/30 report, is now additionally reinforced by a negative DCF** — there is no remaining case (price, funding, or valuation) for firing it. This desk recommends BR close it out formally and explicitly cite the valuation flip as a second, independent reason, not just the funding-math and time-box reasons already on record.
- **No rebalancing action recommended on OMCL** beyond the existing DCA gate mechanism — it remains the one name on the book this desk is not newly worried about.

---

## Heat map summary

| Risk factor | Level | Trend vs. 9/30 ~14:42 ET |
|---|---|---|
| GEHC valuation support (flipped +7.1%→-2.3%) | 🔴 High | ⬆ **new — this book's core rationale for holding GEHC is gone** |
| XLE valuation support (flipped +1.4%→-4.2%) | 🔴 High | ⬆ **new — hedge now has no fundamental floor** |
| NVDA DCF overvaluation (-10.6%→-16.7%) + pool overshoot (+1.47pp, widest on file) | 🔴 High | ⬆ worse — BR's 10/1 decision deadline is today |
| Government shutdown (appears to have begun today; undated/undetermined duration) | 🔴 High | ⬆ **new risk factor, not previously on this book's radar** |
| Rate shock / WACC-rebuild (10yr ~5.2-5.3%, 30yr touched 5.5%) | 🔴 High | → consequence now realized, not just pending |
| Hormuz/Iran tail risk (no confirmable fresh dateline found this run) | 🔴 High | → unchanged — still open, not calm |
| Look-through tech/AI concentration (~28.8% of equity) | 🟡 Moderate | → essentially flat |
| OMCL single-position drawdown (-28.72%) + DCA gate (now further away, pool net-negative) | 🟡 Moderate | ↓ gate moved further out |
| Pool profit level (-0.171%, net negative) | 🟡 Moderate | ⬇ worse — flipped negative from 9/30's +0.266% |
| OMCL DCF support (+43.5% upside, narrowed from +56.9%) | 🟢 Low-Moderate | ↓ narrower but still the one name with real support |
| Headline concentration triggers (NVDA%, NVDA+OMCL%) | 🟢 Low | → clean |
| Liquidity | 🟢 Low | → unchanged |

**Note on data quality (rule 4 discipline):** fresh WebSearch this run (10yr yield, shutdown status, Hormuz) could not independently pull a clean dated 10/1 Treasury close — consistent with the data-quality problems every desk has flagged for days — so this report uses MS's own already-corroborated rate chain (9/30 ~5.29%) rather than a fresh unverified figure. Shutdown status is corroborated across multiple today-dated sources (furlough counts, Senate vote math) and independently referenced by both GS and BR's reports this morning, but this desk treats the *duration* as genuinely unknown, not a one-day event, given this country's own prior 43- and 76-day shutdowns referenced in BR's tax-efficiency notes.

---

Sources:
- [U.S. 10-year Treasury yield reportedly hits 5.2%, highest since 2007 — Digg](https://digg.com/world-business/yy8sp23a)
- [Senators voted for the 12th time on government shutdown. How did it go? — Yahoo](https://www.yahoo.com/news/articles/senators-voted-12th-time-government-135829821.html)
- [Key Senate Vote Fails, Setting Stage For Oct. 1 Shutdown — AOL](https://www.aol.com/news/house-passes-bill-avert-shutdown-152826798.html)
- [Government Shutdown October 2026: 2 of 12 Bills, 92 Days — FedTools](https://www.fedtools.com/blog/government-shutdown-october-2026)
- [Oct 1 Shutdown Odds Fall to 35% After Two 2026 Closures — PredictionHunt](https://www.predictionhunt.com/news/oct-1-shutdown-odds-fall-to-35-after-two-2026-aug-05-2026)
- Internal: trading-experiment/state.md (live Robinhood snapshot, 10/1 ~10:41 ET), analysts/ms-dcf-valuation.md (10/1 ~10:15 ET, this run's dominant new input), analysts/gs-stock-screener.md (10/1 ~09:4x ET), analysts/jpm-earnings-analyzer.md (10/1 ~09:21 ET), analysts/br-portfolio-builder.md (9/30 ~16:13 ET, prior version), analysts/bw-risk-assessment.md (this desk's own 9/30 ~14:42 ET report, prior version)
