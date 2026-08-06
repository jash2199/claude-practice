# BR Portfolio Builder — Investment Policy Report
**Date: 2026-08-06 (Thursday), ~16:15 ET**

*Persona: BlackRock-style portfolio strategist for the "Claude Robinhood Trader" — $50 base + accumulated profits inside a ~$100 taxable cash account, aggressive risk tolerance, short-to-medium horizon with a long-run compounding ambition, equities/ETFs only, fractional shares available. Prior BR report: 2026-08-05 ~16:00 ET — this desk went quiet for the entire 8/6 session (7 runs, ~09:38-15:36 ET) while VTI's overweight and a live rate-shock data point both developed. Portfolio figures below are derived from state.md's 8/6 ~15:36 ET Robinhood-verified `get_portfolio` read (freshest full snapshot on file, seventh and likely last run of the day). I do not have direct Robinhood access; per house rule 4, re-verify live before executing anything sizing-relevant.*

---

## TOP OF REPORT — single biggest gap vs. policy, and an overdue correction to how it's been measured

**VTI is still the book's single biggest gap, and this desk is ending its silence on it today with a concrete recommendation — but the magnitude everyone has been debating for the last 24 hours is off by ~3.2 percentage points, and that matters for how urgent the fix actually is.**

BW's escalation (8/6 ~14:47 ET) and this morning's cross-desk discussion both cite "VTI 39.91-39.92% of equity vs. BR's 30% target." That comparison mixes denominators. This desk's target percentages (30% VTI, 25% VXUS, 15% NVDA, 10% OMCL, 10% XLE, 10% cash) were always defined as shares of the **trading pool** (equity + deployable cash, excluding the $50 untouchable reserve) — that's the only basis on which they sum to 100% including a cash line. VTI's actual **34.9% of equity** figure is a different, larger number than its **36.73% of pool** figure, because cash sits outside equity. Comparing "% of equity" against a "% of pool" target inflates the apparent overweight from +6.73pp to +9.91-9.92pp. This desk's own 8/5 report used the correct pool-basis denominator (36.72%, +6.72pp) and should have flagged the mismatch the moment BW's report started citing the equity-basis figure — that's on this desk, not BW, whose risk-desk convention (expressing everything as % of equity) is reasonable for its own mandate but isn't this desk's allocation basis.

**Corrected, apples-to-apples: VTI is 36.73% of pool vs. a 30% target — a +6.73pp overweight, essentially flat since 8/4 (has ranged 36.7-36.8% of pool all week, not "widening" as the equity-basis framing implied).** That's still a real, persistent breach of this book's own 5pp drift trigger, running over two weeks with no corrective action — BW's core complaint stands even after the correction. What changes is the urgency framing: this is a two-week-old, essentially-stable overweight, not a newly-accelerating one.

**Recommendation, ending the silence:** a small, disciplined **partial trim — $2.00 of VTI, redirected entirely to cash** — executed as a rule-based rebalancing action, not a reactive sell. This is explicitly **not** a rule-1 violation ("no trade without a fresh catalyst"): rule 1 exists to stop reactive trading on news/sentiment, and this book has separately, deliberately built a falsifiable-trigger discipline (rule 7, validated three times on OMCL/XLE) precisely so that pre-committed, rule-based actions don't need a fresh catalyst to fire. The 5pp single-position drift trigger (§5 rule 2 below) is exactly that kind of pre-committed rule — it has just never been enforced because "no fresh catalyst" got applied to it by mistake. Trimming to *partially* — not fully — close a two-week-stale, rule-defined breach, while simultaneously fixing the *other* two-week-stale rule breach (cash below its 10% floor), is the disciplined action this desk should have proposed a week ago instead of another "monitor and redirect" rollover.

**Why $2.00 and why cash, not satellite:** every satellite candidate has an open gate (OMCL: post-transcript sign-off, 5th week; IONQ: rule 6 cross-vet not started; GEHC: rule 6 cross-vet not started) — routing trim proceeds into an ungated satellite name today would just trade one process violation for another. Cash is the one line item with no gate: it's been stuck at $4.00 (7.99-8.10% of pool) for over a week against a 10% target, and BW/this desk have both separately called thin cash a standing risk-buffer concern given three live gated ideas are sitting in the queue. A $2.00 trim does both jobs at once:

| | Before | After |
|---|---|---|
| VTI | $18.40 (36.73% of pool) | $16.40 (32.74% of pool) — reduces the overweight from +6.73pp to +2.74pp, still slightly over target but back inside a defensible range, without forcing full compliance |
| Cash | $4.00 (7.99% of pool) | $6.00 (11.98% of pool) — clears the 10% target for the first time in over a week, giving genuine dry powder for whichever satellite gate (OMCL, IONQ, GEHC) clears next |
| Pool total | $50.09 | $50.09 (unchanged — reallocation only) |

This is a recommendation for the trader to execute at its discretion, verified live via Robinhood first per house rule 4 — this desk does not place trades.

---

## 1. Recommended allocation vs. current book

Trading-book value (per state.md's 8/6 ~15:36 ET Robinhood-verified read, seventh run of the day): **pool ≈ $50.09** = equity $46.09 + deployable cash $4.00. (Reserve: a further ~$50 untouchable, per Jash's 7/10 clarification — excluded from all percentages below. **All percentages in this report are % of pool unless explicitly marked "% of equity."**)

| Sleeve | Ticker | Role | Target % (of pool) | Current % (of pool) | Current $ | Gap |
|---|---|---|---|---|---|---|
| Core | VTI (Vanguard Total Stock Market) | Core — broad US equity | 30% | 36.73% | $18.40 | **+6.73pp OVER (largest gap; corrected from the 39.92%-of-equity figure circulating this cycle — see TOP)** |
| Core | VXUS (Vanguard Total International) | Core — ex-US diversifier | 25% | 26.62% | $13.34 | +1.62pp over (essentially flat all week) |
| Satellite | NVDA | Satellite — single-name AI/semis conviction | 15% (soft cap 18-20% of equity) | 10.91% | $5.47 | −4.09pp under (price-drift underweight, not a decision) |
| Satellite | OMCL | Satellite — healthcare-tech diversifier, half-size | 10% | 7.67% | $3.84 | −2.33pp under (drifted further this week — 8th straight down session, no company catalyst) |
| Satellite | XLE (Energy Select Sector SPDR) | Satellite — energy/oil-cycle diversifier, half-size | 10% | 10.08% | $5.05 | ~+0.08pp on target |
| Cash | — | Dry powder / event-window buffer | 10% | 7.99% | $4.00 | −2.01pp under (unchanged for well over a week — see TOP for the fix) |
| **Total** | | | **100%** | **100%** | **~$50.09** | |

**Core / Satellite / Cash roll-up**: Core 55% target vs. **63.35% actual (+8.35pp OVER)**; Satellite 35% target vs. **28.66% actual (−6.34pp UNDER)**; Cash 10% target vs. 7.99% actual (−2.01pp under). Essentially unchanged from 8/5's roll-up (63.36%/28.69%/7.95%) — confirms the "widening" read this week was largely a denominator artifact, not real drift; the underlying imbalance has been stable, not accelerating.

---

## 2. Core vs. satellite discipline — status check

- **Core (VTI + VXUS, target 55% of pool)**: recommending the $2.00 VTI partial trim above — the first active management action on this position in over two weeks. VXUS (+1.62pp over) is close enough to target that no action is warranted; do not trim.
- **Satellite (NVDA + OMCL + XLE, target 35% of pool)**: still 6.34pp under target. NVDA touched a fresh cycle high intraday today ($223.06 at the open) before giving it back to $220.165 by the 15:36 close-adjacent read — no re-rating, price noise around an unchanged MS model. OMCL extended to an **eighth straight down session** (-2.88% today, fresh multi-week low) on no identifiable company catalyst — per this book's own OMCL contingency plan (state.md), a drift without a structural break is not a sell signal and, if anything, is drifting toward a *better* entry once the sizing gate clears. XLE was the day's best mover (+1.56%) on unsigned "final stages" Hormuz headline language that MS, GS, and BW all independently flagged today as sentiment, not fundamentals — MS's oil-adjusted composite gap actually **widened** to ~21-22% on falling WTI even as the ETF price rose. This desk agrees: no add to XLE on today's price strength.
- **Cash (target 10%)**: still ~7.99% of pool, unchanged for well over a week — the binding constraint on every satellite decision in the queue (OMCL, IONQ, GEHC). The trim recommended above is the first proposed mechanism to fix this without waiting on a rule-6 cross-vet to clear first.

## 3. Expected annual return range (historical basis)

| Holding | Basis | Expected range (long-run, annualized) |
|---|---|---|
| VTI | US total-market index, ~97-year S&P-proxy history | ~9-11% nominal. Rate backdrop **tightened slightly today**: fresh WebSearch finds the 10-year Treasury yield rose 3bp to **4.647%** (CNBC), and September rate-hike odds ticked up to **56.7%** (CME FedWatch, from 54.4% a day earlier) on energy-driven inflation expectations — still comfortably below this book's own Rule 6a trigger (10yr >4.75%, two consecutive closes) but the second straight session moving the wrong direction after 8/5's brief easing |
| VXUS | Developed + EM ex-US index | ~6-9% nominal; same modest rate headwind as VTI |
| NVDA | Single-name, AI/semis hypergrowth — MS's fair value (~$150.6, model unchanged) | Historically 25-40%+ CAGR over the past decade; not a sustainable forward baseline. MS's downside gap sits at **~32.5%** (from price alone, model unchanged since 7/24). August 26 print (20 days out) is the next real catalyst |
| OMCL | Small/mid-cap healthcare-tech, high earnings-day beta | ~8-15% long-run. MS's model-unchanged fair value ($53.89) implies **~45.9% upside** at today's price (~$36.10-36.945) — the widest discount on the book, essentially flat all week despite an 8-session losing streak in the price itself |
| XLE | Energy sector basket, oil-cycle-driven | ~5-9% long-run with high cyclical variance. MS's oil-adjusted composite gap: **~21-22% overvalued**, third straight session of widening on a genuine XOM/CVX data basis even as the ETF price rallied on an unsigned headline |

**Blended portfolio expectation at current weights**: roughly **8-12% annualized** over a full market cycle — unchanged from recent reports. Nothing this cycle argues for revising this band; NVDA and XLE's DCF gaps continue to widen on price/oil moves respectively (less margin of safety), OMCL's discount holds steady, and today's rate move is a modest headwind, not a regime change.

## 4. Expected maximum drawdown in a bad year

Per BW's 8/6 ~14:47 ET recession stress test (freshest on file):

- **Blended equity-sleeve estimate: ~-34%**, applied to the $46.10 equity sleeve implies roughly **-$15.7**, bringing account total value to **~$84.4, an approximate -15.7% whole-account drawdown** — cushioned by the ~54% cash allocation (of which $50 is untouched reserve), but the equity sleeve itself would take a much harder hit than the whole-account number implies. Unchanged from every recent read; the recommended $2.00 trim is too small to move this estimate materially.
- **Per-position estimates (BW, unchanged)**: NVDA -45% to -55%; OMCL -35% to -45% (already -22.7%, thin-book); VTI -30% to -35% (tech-tilted); VXUS -25% to -30% (unhedged FX risk in a dollar-flight scenario); **XLE -30% to -45% in a demand recession but could instead rally in a supply/geopolitical-driven one** — the asymmetry is the reason for holding it, but BW is explicit the hedge fails exactly when a "normal" demand-driven recession hits.
- **A second live macro channel with no rule yet**: BW's rate-shock flag (10yr crossing 4.75% on two consecutive closes) has now moved the wrong direction for two straight sessions (4.63% on 8/4 → 4.647% today) without firing — still not a live trigger, but closer than it's been since 8/1. This desk supports formally adopting BW's proposed Rule 6a mechanism rather than continuing to flag the gap unaddressed (see §5.6).

**Policy guidance, restated**: the $50 reserve remains the only hard floor on total-account damage in any scenario. The half-size satellite-entry discipline applied to OMCL and XLE continues to keep even a live, ongoing narrative reversal to a small dollar impact at this account's size.

## 5. Rebalancing schedule and trigger rules

1. **Calendar cadence**: standing bi-weekly allocation check plus any trigger-fired reviews below — unchanged.
2. **Drift trigger, now being enforced rather than just cited**: any single position drifting more than **5pp from its own pool-basis target %** flags for review. **VTI (+6.73pp of pool) has been in breach for over two weeks — this report is the first to act on it rather than roll it forward.** NVDA (−4.09pp) remains a monitor-only underweight (price drift, not actionable).
3. **Satellite concentration trigger** (unchanged): any single satellite name crossing ~18-20% of equity forces a mandatory trim review — all three clear individually on a face-value basis. BW's look-through math puts true correlated growth/multiple exposure (NVDA direct + NVDA-inside-VTI + OMCL's shared discount-rate sensitivity) at ~22.8% of equity — this desk repeats its 8/5 proposal to formalize a distinct look-through concentration trigger at the next bi-weekly cadence check, still not yet actioned by any desk.
4. **Falsifiable-trigger discipline** (unchanged): no open time-boxed trigger remains active on any current holding.
5. **VTI drift review, now resolved for this cycle**: partial trim recommended above (§TOP). Post-trim gap (+2.74pp of pool) sits closer to, though not fully at, target — deliberately not forcing full compliance in one move, consistent with this book's half-size entry-discipline pattern applied in reverse.
6. **Rule 6a (rate-shock trigger, proposed by BR 7/31, re-proposed by BW 8/6): this desk formally adopts it as house policy today**, rather than leaving it as a standing informal flag. **Rule: if the 10-year Treasury yield closes above ~4.75% (or the 30-year above ~5.25%) on two consecutive trading days, pause any new high-multiple/growth add — NVDA, further VTI/VXUS core-ups — until the move either reverses or a fresh cross-desk read assesses the regime.** Current status: 10yr at 4.647% (up 3bp today, second straight session moving toward the threshold), not fired. This closes the multi-week gap where the rule existed informally in every BW report since 7/31 but was never formally adopted by the desk that owns sizing calls.
7. **Hormuz-hedge symmetry, restated**: XLE's price strength today should not be read as hedge vindication — MS's oil-adjusted fair value actually widened on falling WTI even as the ETF rallied on unsigned headline language, a divergence GS, MS, and BW all flagged independently. No trim, no add.

## 6. Tax efficiency strategy (taxable cash account)

- **Every position in this book is still short-term** — the oldest holding (NVDA, entered 7/9) is not yet a month old. Any gain realized today, including the recommended VTI trim, is taxed as ordinary income. VTI's unrealized gain (~+2.2% per BW's 8/6 snapshot) means the $2.00 trim realizes a small taxable gain (~$0.04-0.05) — immaterial at this account's size but worth logging as the first realized gain of the book's history if executed.
- **Tax-loss harvesting readiness, updated**: OMCL's unrealized loss sits around -22.7% as of today's close-adjacent read — still the book's largest unrealized loss by a wide margin. No harvesting action recommended today (OMCL is a live, cross-vetting-blocked satellite position, not a candidate for an exit); flagged for the record only.
- **Wash-sale discipline**: unchanged — if a satellite position is ever sold at a loss, do not re-buy the same ticker within 30 days. Not applicable to the VTI trim recommended above (a gain, not a loss, and VTI remains a live core position, not an exit).
- **Materiality caveat**: at ~$50.09 deployed, today's tax dollar impact is trivial regardless of action taken. The discipline exists for when the account scales.

## 7. Dollar-cost-averaging plan for redeploying profits

1. **If the $2.00 VTI trim executes**, deployable cash rises to ~$6.00 (11.98% of pool) — for the first time in over a week, above the 10% target, genuine dry powder rather than a stuck floor.
2. **Standing next-dollar priority, reaffirmed**:
   - **(a) OMCL's sizing gate remains this desk's top process priority.** MS/BW's formal post-transcript sign-off (rule 6) remains the only blocker on GS's #1 conviction idea, now into a fifth week.
   - **(b) IONQ is a new, genuine candidate this cycle** — GS's #2 pick, a confirmed beat-and-raise (Q2 revenue $80.1M vs. ~$66.4M est., FY guide raised to ~$285M midpoint) holding up through a full session with no fresh caution from any desk, but **zero rule-6 cross-vetting has started** (no MS DCF, no BW risk read). This desk explicitly asks MS and BW to prioritize the IONQ cross-vet next cycle, consistent with GS's repeated request today.
   - **(c) GEHC remains flagged for a sixth-plus consecutive week** by three desks (GS, BW, and this desk) with zero rule-6 action. This desk repeats: the cross-vetting cycle needs to actually be requested, not just re-flagged.
   - **(d) Core (VTI or VXUS) last** — VTI is now being actively managed down rather than topped up; VXUS is close enough to target to leave alone.
3. **Satellite DCA, general**: no new (fourth) satellite slot recommended until NVDA, OMCL, and XLE have more of a track record at current sizing, and until at least one of IONQ/GEHC has cleared rule 6 — unchanged stance, now with a concrete pipeline (IONQ, GEHC) rather than an abstract "next idea."
4. **Cash floor**: the $2.00 trim addresses this directly rather than waiting on a satellite gate to clear first or a fresh deposit — the first proposal this cycle that doesn't require another desk's sign-off to execute.

## 8. Areas to consider from recent WEF / macro-policy discussion (fresh WebSearch this run)

- **Concentration risk commentary has sharpened into a specific, sourced number this cycle.** Fresh search finds Morningstar Indexes strategist Dan Lefkovitz noting the US market's 10 largest constituents now consume **36% of index weight, up from 23% just five years ago**, almost all tied to AI — a direct, external validation of this book's own internal concern (BW's ~22.8% look-through NVDA/OMCL correlated-growth exposure, VTI's own ~35% tech look-through). This isn't a generic diversification platitude; it's the same concentration dynamic this book's holdings are exposed to, confirmed at the index level.
- **Geographic diversification guidance sharpened with a concrete stat**: the US represents ~25% of the global economy but **63%** of global stock-market value — the standard institutional case for VXUS-style ex-US exposure, reinforced rather than just repeated this cycle.
- **A concrete tactical suggestion worth logging, not acting on today**: small-cap and value-factor tilts (smart-beta, small-value ETFs) are being recommended by multiple sources as a way to diversify away from the AI/mega-cap trade specifically, distinct from just adding more broad-market or international exposure. This is a genuinely new idea for this book's satellite pipeline — not actionable at current cash levels, but worth flagging as a category (alongside GEHC/IONQ) for when the account has more capacity.
- **Rate story, updated**: 10yr yield 4.647% (+3bp today), September hike odds 56.7% (CME FedWatch), both moving modestly toward — not through — this book's Rule 6a threshold. See §5.6 for the now-formalized rule.
- **WEF Global Risks Report 2026 geoeconomic-confrontation framing (carried forward, not re-searched this cycle)**: remains directly relevant given the still-unsigned Hormuz situation every desk is tracking. No change to the standing assessment that a dedicated geopolitical-resilient-sector allocation (defense/utilities) is impractical for this book's small-scale, equities/ETFs-only mandate.

---

## One-page Investment Policy Statement (for the trader to follow)

**Client**: Claude Robinhood Trader experiment. Capital: $50 base + accumulated profits, inside a ~$100 taxable cash account (the ~$50 beyond trading capital is untouchable reserve). Risk tolerance: aggressive. Horizon: short-to-medium, with an explicit goal of compounding into a long-running track record. Universe: equities/ETFs only, no options, fractional shares available.

**Target allocation** (of the ~$50.09 trading pool — all targets and gaps in this report are pool-basis unless marked otherwise): Core 55% (VTI 30% / VXUS 25%) — Satellite 35% (NVDA 15% soft-capped at 18-20% of equity; look-through correlated exposure runs materially higher per BW, ~22.8% of equity, formal trigger still pending; OMCL 10%; XLE 10%) — Cash 10% (higher during live binary-event windows or an active Rule 6a rate-shock window).

**Standing rules** (see Strategy & theories in state.md for full detail, rules 1-10, plus Rule 6a): no trade without a fresh catalyst *or without a pre-committed rule-based trigger firing* — the two are distinct, and this report formally clarifies that the 5pp drift trigger is the latter, not the former; never chase an extended move; diversified-basket buys are exempt from the single-name geopolitical veto; always verify price live via Robinhood before sizing; a DCF "sharply overvalued" call is a hard pass; new ideas need a full cross-vetting cycle before sizing; open theses get a falsifiable trigger with a hard time-box; look-through concentration matters more than headline allocation; **Rule 6a (rate-shock pause, 10yr >4.75%/30yr >5.25% on two consecutive closes) is now formally adopted, not just informally tracked — currently not in effect, 10yr at 4.647%.**

**Current live decision point**: **recommend a $2.00 VTI trim, redirected to cash**, to be executed at the trader's discretion after a fresh live Robinhood price check — the first active management of the two-week-old VTI drift-trigger breach, sized to meaningfully reduce (not eliminate) the overweight while simultaneously restoring the cash floor to target. Absent that trim, no other position warrants action today: OMCL's sizing gate (5th week) and GEHC's/IONQ's rule-6 cross-vets remain the standing next-dollar priorities once cash allows.

**Review cadence**: bi-weekly standing allocation check, plus trigger-fired reviews on >5pp single-position drift (now being enforced, not just monitored), satellite concentration crossing 18-20% of equity on a face-value basis (not fired) or the proposed look-through threshold (still pending formal adoption), any pre-committed time-box reaching its deadline, or Rule 6a firing.

---

## Cross-check with other analysts

- **BW (8/6, ~14:47 ET)**: escalated the VTI trim recommendation given this desk's 22+ hour silence — correct to escalate, and this desk agrees action was overdue, but BW's headline figure (39.91% of equity) mixed denominators against this desk's pool-basis 30% target; corrected above to 36.73% of pool, +6.73pp, essentially flat all week rather than accelerating. BW's look-through concentration math (~22.8% of equity) and rate-shock Rule 6a proposal are both adopted in this report.
- **GS (8/6, ~15:45 ET)**: argued the VTI question is really a demand-side (too little satellite) problem, not a supply-side (too much core) one, and that cash — not conviction — is the real constraint on IONQ/GEHC. This desk agrees cash is the binding constraint, which is exactly why the recommended trim routes to cash rather than forcing VTI to target in one move or waiting indefinitely for a satellite gate to clear first — a synthesis of both views rather than a pick between them.
- **MS (8/6, ~10:25 ET)**: NVDA/OMCL price-only rolls, model unchanged on both. XLE's oil-adjusted gap widened to ~21-22% even as the ETF price rallied on an unsigned Hormuz headline — explicit do-not-add reaffirmed and adopted above.
- **JPM (8/6, ~09:30 ET)**: no covered name inside the 2-week earnings window; NVDA reopens for pre-earnings coverage ~August 12 (14 days out). OXY and IONQ both reported 8/5 after close and beat; IONQ's beat is the input behind this report's new cross-vet request (§7b).

---

Sources:
- [Treasury yields rise as traders sharpen focus on rates (CNBC)](https://www.cnbc.com/2026/08/06/treasury-yields-interest-rates-inflation-fed.html)
- [US 10-Year Treasury Yield Rises to Over 2-Month High (TradingEconomics)](https://tradingeconomics.com/united-states/government-bond-yield/news/508545)
- [US 10 Year Treasury Note Yield (TradingEconomics)](https://tradingeconomics.com/united-states/government-bond-yield)
- [How to Diversify Your Portfolio: 5 Tips for 2026 (Morningstar)](https://www.morningstar.com/portfolios/5-smart-ways-diversify-your-portfolio-2026)
- [5 smart ways to diversify your portfolio in 2026 (Yahoo Finance / Barchart syndication)](https://finance.yahoo.com/news/5-smart-ways-diversify-portfolio-015155195.html)
- [Top investment actions in 2026 (WTW)](https://www.wtwco.com/en-us/insights/2025/12/top-investment-actions-in-2026)
- [2026 Outlook: Portfolio-Wide Views (Cambridge Associates)](https://www.cambridgeassociates.com/insight/2026-outlook-portfolio-wide-views/)
- Internal: trading-experiment/state.md (8/6 Balance history and Run notes through the 15:36 ET close), analysts/bw-risk-assessment.md (8/6 ~14:47 ET), analysts/gs-stock-screener.md (8/6 ~15:45 ET), analysts/ms-dcf-valuation.md (8/6 ~10:25 ET), analysts/jpm-earnings-analyzer.md (8/6 ~09:30 ET)
